
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fileHandle_t ;
struct TYPE_5__ {void* filelen; void* fileofs; } ;
typedef TYPE_1__ aas_lump_t ;
struct TYPE_6__ {TYPE_1__* lumps; } ;
typedef TYPE_2__ aas_header_t ;
struct TYPE_7__ {int (* FS_Write ) (void*,int,int ) ;} ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int,int ) ;

int FUNC_2(fileHandle_t VAR_3, aas_header_t *VAR_4, int VAR_5, void *VAR_6, int VAR_7)
{
 aas_lump_t *VAR_8;

 VAR_8 = &VAR_4->lumps[VAR_5];

 VAR_8->fileofs = FUNC_0(VAR_0);
 VAR_8->filelen = FUNC_0(VAR_7);

 if (VAR_7 > 0)
 {
  VAR_1.FS_Write(VAR_6, VAR_7, VAR_3 );
 }

 VAR_0 += VAR_7;

 return VAR_2;
}
