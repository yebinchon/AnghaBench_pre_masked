
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * opaque; int zfree; int zalloc; scalar_t__ avail_in; int * next_in; } ;
struct TYPE_4__ {TYPE_3__ inflater; int allocator; } ;
typedef TYPE_1__ zlib_codec_data ;
typedef int uint32_t ;
typedef int chd_error ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;

chd_error FUNC_2(void *VAR_8, uint32_t VAR_9)
{
 int VAR_10;
 chd_error VAR_11;
 zlib_codec_data *VAR_12 = (zlib_codec_data*)VAR_8;


 FUNC_1(VAR_12, 0, sizeof(zlib_codec_data));


 VAR_12->inflater.next_in = (Bytef *)VAR_12;
 VAR_12->inflater.avail_in = 0;
 VAR_12->inflater.zalloc = VAR_6;
 VAR_12->inflater.zfree = VAR_7;
 VAR_12->inflater.opaque = &VAR_12->allocator;
 VAR_10 = FUNC_0(&VAR_12->inflater, -VAR_3);


 if (VAR_10 == VAR_4)
  VAR_11 = VAR_2;
 else if (VAR_10 != VAR_5)
  VAR_11 = VAR_0;
 else
  VAR_11 = VAR_1;

 return VAR_11;
}
