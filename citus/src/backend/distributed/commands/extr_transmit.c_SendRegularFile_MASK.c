
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {int len; int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int FileCompat ;
typedef int File ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,int const,int const) ;
 int FUNC_3 (int *,int ,int const,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int const) ;
 TYPE_1__* FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;

void
FUNC_11(const char *VAR_3)
{
 StringInfo VAR_4 = ((void*)0);
 int VAR_5 = -1;
 const uint32 VAR_6 = 32768;
 const int VAR_7 = (VAR_0 | VAR_1);
 const int VAR_8 = 0;


 File VAR_9 = FUNC_2(VAR_3, VAR_7, VAR_8);
 FileCompat VAR_10 = FUNC_1(VAR_9);





 VAR_4 = FUNC_9();
 FUNC_8(VAR_4, VAR_6);

 FUNC_7();

 VAR_5 = FUNC_3(&VAR_10, VAR_4->data, VAR_6,
          VAR_2);
 while (VAR_5 > 0)
 {
  VAR_4->len = VAR_5;

  FUNC_5(VAR_4);

  FUNC_10(VAR_4);
  VAR_5 = FUNC_3(&VAR_10, VAR_4->data, VAR_6,
           VAR_2);
 }

 FUNC_6();

 FUNC_4(VAR_4);
 FUNC_0(VAR_9);
}
