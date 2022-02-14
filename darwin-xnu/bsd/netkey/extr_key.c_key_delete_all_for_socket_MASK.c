
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct socket {int dummy; } ;
struct secasvar {int flags2; struct socket* so; int * savtree; } ;
struct secashead {int flags2; struct socket* so; int * savtree; } ;


 int VAR_0 ;
 struct secasvar* FUNC_0 (int *) ;
 struct secasvar* FUNC_1 (struct secasvar*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct secasvar*,int ) ;
 int FUNC_4 (struct secasvar*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t* VAR_6 ;

__attribute__((used)) static void
FUNC_5 (struct socket *VAR_7)
{
 struct secashead *VAR_8, *VAR_9;
 struct secasvar *VAR_10, *VAR_11;
 u_int VAR_12;
 u_int VAR_13;

 for (VAR_8 = FUNC_0(&VAR_4);
   VAR_8 != ((void*)0);
   VAR_8 = VAR_9) {
  VAR_9 = FUNC_1(VAR_8, VAR_3);
  for (VAR_12 = 0; VAR_12 < FUNC_2(VAR_5); VAR_12++) {
   VAR_13 = VAR_6[VAR_12];
   for (VAR_10 = FUNC_0(&VAR_8->savtree[VAR_13]); VAR_10 != ((void*)0); VAR_10 = VAR_11) {
    VAR_11 = FUNC_1(VAR_10, VAR_3);
    if (VAR_10->flags2 & VAR_2 &&
     VAR_10->so == VAR_7) {
     FUNC_4(VAR_10, VAR_1);
     FUNC_3(VAR_10, VAR_0);
    }
   }
  }
 }
}
