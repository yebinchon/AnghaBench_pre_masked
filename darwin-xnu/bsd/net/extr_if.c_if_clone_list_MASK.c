
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_addr_t ;
struct if_clone {int ifc_name; } ;
typedef int outbuf ;


 int VAR_0 ;
 int VAR_1 ;
 struct if_clone* FUNC_0 (int *) ;
 struct if_clone* FUNC_1 (struct if_clone*,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_5(int VAR_6, int *VAR_7, user_addr_t VAR_8)
{
 char VAR_9[VAR_1];
 struct if_clone *VAR_10;
 int VAR_11 = 0;

 *VAR_7 = VAR_4;
 if (VAR_8 == VAR_2) {

  return (0);
 }

 if (VAR_6 < 0)
  return (VAR_0);

 VAR_6 = (VAR_4 < VAR_6) ? VAR_4 : VAR_6;

 for (VAR_10 = FUNC_0(&VAR_3); VAR_10 != ((void*)0) && VAR_6 != 0;
     VAR_10 = FUNC_1(VAR_10, VAR_5), VAR_6--, VAR_8 += VAR_1) {
  FUNC_2(VAR_9, sizeof(VAR_9));
  FUNC_4(VAR_9, VAR_10->ifc_name, VAR_1);
  VAR_11 = FUNC_3(VAR_9, VAR_8, VAR_1);
  if (VAR_11)
   break;
 }

 return (VAR_11);
}
