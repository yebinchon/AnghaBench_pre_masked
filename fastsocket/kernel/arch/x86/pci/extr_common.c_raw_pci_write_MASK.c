
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int (* write ) (unsigned int,unsigned int,unsigned int,int,int,int ) ;} ;
struct TYPE_3__ {int (* write ) (unsigned int,unsigned int,unsigned int,int,int,int ) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,int,int,int ) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int,int,int,int ) ;

int FUNC_2(unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5,
      int VAR_6, int VAR_7, u32 VAR_8)
{
 if (VAR_3 == 0 && VAR_6 < 256 && VAR_2)
  return VAR_2->write(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_1)
  return VAR_1->write(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 return -VAR_0;
}
