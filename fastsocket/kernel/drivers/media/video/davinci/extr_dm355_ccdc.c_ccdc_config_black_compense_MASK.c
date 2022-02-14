
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ccdc_black_compensation {int b; int gb; int gr; int r; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct ccdc_black_compensation *VAR_6)
{
 u32 VAR_7;

 VAR_7 = (VAR_6->b & VAR_4) |
  ((VAR_6->gb & VAR_4) <<
  VAR_2);
 FUNC_0(VAR_7, VAR_1);

 VAR_7 = ((VAR_6->gr & VAR_4) <<
  VAR_3) |
  ((VAR_6->r & VAR_4) <<
  VAR_5);
 FUNC_0(VAR_7, VAR_0);
}
