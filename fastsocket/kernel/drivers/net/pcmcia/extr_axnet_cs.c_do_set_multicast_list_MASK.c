
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {long base_addr; int flags; scalar_t__ mc_list; } ;
struct ei_device {int* mcfilter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int*,struct net_device*) ;
 int FUNC_2 (int*,int,int) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_9)
{
 long VAR_10 = VAR_9->base_addr;
 int VAR_11;
 struct ei_device *VAR_12 = (struct ei_device*)FUNC_3(VAR_9);

 if (!(VAR_9->flags&(VAR_8|VAR_7))) {
  FUNC_2(VAR_12->mcfilter, 0, 8);
  if (VAR_9->mc_list)
   FUNC_1(VAR_12->mcfilter, VAR_9);
 } else {

  FUNC_2(VAR_12->mcfilter, 0xFF, 8);
 }

 FUNC_4(VAR_1 + VAR_3, VAR_10 + VAR_0);
 for(VAR_11 = 0; VAR_11 < 8; VAR_11++)
 {
  FUNC_4(VAR_12->mcfilter[VAR_11], VAR_10 + FUNC_0(VAR_11));
 }
 FUNC_4(VAR_1 + VAR_2, VAR_10 + VAR_0);

   if(VAR_9->flags&VAR_8)
    FUNC_4(VAR_4 | 0x58, VAR_10 + VAR_6);
 else if(VAR_9->flags&VAR_7 || VAR_9->mc_list)
    FUNC_4(VAR_4 | 0x48, VAR_10 + VAR_6);
   else
    FUNC_4(VAR_4 | 0x40, VAR_10 + VAR_6);

 FUNC_4(VAR_1+VAR_2+VAR_5, VAR_10+VAR_0);
}
