
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long read_offset; } ;


 int FUNC_0 (char*,int,void*,unsigned int) ;
 int FUNC_1 (char*,int,void*,unsigned int,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 (int,void*,unsigned int) ;

int FUNC_3(int VAR_2, void *VAR_3, unsigned int VAR_4)
{
   if (VAR_2 >= VAR_0)
   {

      FUNC_0("vc_hostfs_read(%d,%p,%u): invalid fildes", VAR_2, VAR_3, VAR_4);
      return -1;
   }
   else
   {


      int VAR_5 = (int) FUNC_2(VAR_2, VAR_3, VAR_4);
      FUNC_1("vc_hostfs_read(%d,%p,%u) = %d", VAR_2, VAR_3, VAR_4, VAR_5);
      if (VAR_5 > 0)
      {
         VAR_1[VAR_2].read_offset += (long) VAR_5;
      }
      return VAR_5;
   }
}
