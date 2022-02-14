
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zd_chip {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zd_chip*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct zd_chip *VAR_8, int VAR_9)
{
 u32 VAR_10;
 FUNC_0(FUNC_1(&VAR_8->mutex));




 if (!VAR_9)
  VAR_10 = VAR_3|VAR_5|VAR_6|VAR_1;
 else
  VAR_10 = VAR_3|VAR_5|VAR_6|VAR_1|
   VAR_7|VAR_2|VAR_4;

 return FUNC_2(VAR_8, VAR_10, VAR_0);
}
