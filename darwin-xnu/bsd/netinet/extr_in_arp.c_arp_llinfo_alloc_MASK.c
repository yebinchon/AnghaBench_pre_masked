
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct llinfo_arp {int la_holdq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,scalar_t__,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct llinfo_arp*,int) ;
 int VAR_4 ;
 struct llinfo_arp* FUNC_2 (int ) ;
 struct llinfo_arp* FUNC_3 (int ) ;

__attribute__((used)) static struct llinfo_arp *
FUNC_4(int VAR_5)
{
 struct llinfo_arp *VAR_6;

 VAR_6 = (VAR_5 == VAR_0) ? FUNC_2(VAR_4) :
     FUNC_3(VAR_4);
 if (VAR_6 != ((void*)0)) {
  FUNC_1(VAR_6, sizeof (*VAR_6));





  FUNC_0(&VAR_6->la_holdq, VAR_2, (VAR_3 == 0) ?
      (uint32_t)-1 : VAR_3, VAR_1);
 }

 return (VAR_6);
}
