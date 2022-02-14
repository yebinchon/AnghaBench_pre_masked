
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* set_resolution ) (int ,unsigned int,unsigned int,int,float,int,int,int) ;} ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int,unsigned int,int,float,int,int,int) ;

bool FUNC_1(unsigned VAR_2, unsigned VAR_3,
      int VAR_4, float VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
   if (VAR_0 && VAR_0->set_resolution)
      return VAR_0->set_resolution(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
   return 0;
}
