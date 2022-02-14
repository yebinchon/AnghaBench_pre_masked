
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {struct message* next; } ;
typedef int bf ;


 char* FUNC_0 (char const*,char*,int) ;
 struct message* FUNC_1 (char*) ;
 int FUNC_2 (struct message*,char const*,int) ;
 struct message* VAR_0 ;
 struct message* FUNC_3 (char*,char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, char *VAR_2, const char *VAR_3,
   int VAR_4)
{
 int VAR_5 = 0;
 char VAR_6[16384];
 char *VAR_7 = FUNC_0(VAR_1, VAR_6, sizeof(VAR_6));
 struct message *VAR_8 = FUNC_1(VAR_7);

 if (VAR_8 != ((void*)0))
  VAR_5 = FUNC_2(VAR_8, VAR_3, VAR_4);
 else {
  VAR_8 = FUNC_3(VAR_7, VAR_2, VAR_3, VAR_4);

  if (VAR_8 != ((void*)0)) {
   VAR_8->next = VAR_0;
   VAR_0 = VAR_8;
  } else
   VAR_5 = -1;
 }
 return VAR_5;
}
