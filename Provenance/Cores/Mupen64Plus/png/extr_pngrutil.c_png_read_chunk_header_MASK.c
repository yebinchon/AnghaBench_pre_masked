
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int png_byte ;
struct TYPE_8__ {void* io_state; scalar_t__ chunk_name; } ;


 scalar_t__ FUNC_0 (int *) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int ,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;
 int FUNC_6 (TYPE_1__*) ;

png_uint_32
FUNC_7(png_structrp VAR_3)
{
   png_byte VAR_4[8];
   png_uint_32 VAR_5;
   FUNC_5(VAR_3, VAR_4, 8);
   VAR_5 = FUNC_4(VAR_3, VAR_4);


   VAR_3->chunk_name = FUNC_0(VAR_4+4);

   FUNC_3(0, "Reading %lx chunk, length = %lu",
       (unsigned long)VAR_3->chunk_name, (unsigned long)VAR_5);


   FUNC_6(VAR_3);
   FUNC_1(VAR_3, VAR_4 + 4, 4);


   FUNC_2(VAR_3, VAR_3->chunk_name);





   return VAR_5;
}
