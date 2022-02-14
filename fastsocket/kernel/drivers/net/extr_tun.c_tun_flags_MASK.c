
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_0(struct tun_struct *VAR_9)
{
 int VAR_10 = 0;

 if (VAR_9->flags & VAR_7)
  VAR_10 |= VAR_3;
 else
  VAR_10 |= VAR_2;

 if (VAR_9->flags & VAR_5)
  VAR_10 |= VAR_0;

 if (VAR_9->flags & VAR_6)
  VAR_10 |= VAR_1;

 if (VAR_9->flags & VAR_8)
  VAR_10 |= VAR_4;

 return VAR_10;
}
