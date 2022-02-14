
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_flags; int f_mode; TYPE_1__* f_mapping; } ;
struct block_device {int dummy; } ;
typedef int fmode_t ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 struct block_device* FUNC_0 (int ) ;
 int VAR_1 ;
 long FUNC_1 (struct block_device*,int ,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_2, unsigned VAR_3, unsigned long VAR_4)
{
 struct block_device *VAR_5 = FUNC_0(VAR_2->f_mapping->host);
 fmode_t VAR_6 = VAR_2->f_mode;





 if (VAR_2->f_flags & VAR_1)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;

 return FUNC_1(VAR_5, VAR_6, VAR_3, VAR_4);
}
