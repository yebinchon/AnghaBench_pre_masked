
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int StringInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int const) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

__attribute__((used)) static bool
FUNC_9(StringInfo VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 0;
 bool VAR_8 = 1;
 const int VAR_9 = 0;

 FUNC_0();
 FUNC_8();
 VAR_6 = FUNC_5();
 if (VAR_6 == VAR_0)
 {
  FUNC_2(VAR_4, (FUNC_3(VAR_1),
      FUNC_4("unexpected EOF on client connection")));
 }


 VAR_7 = FUNC_6(VAR_5, VAR_9);
 if (VAR_7 == VAR_0)
 {
  FUNC_2(VAR_4, (FUNC_3(VAR_1),
      FUNC_4("unexpected EOF on client connection")));
 }

 FUNC_1();

 switch (VAR_6)
 {
  case 'd':
  {
   VAR_8 = 0;
   break;
  }

  case 'c':
  {
   VAR_8 = 1;
   break;
  }

  case 'f':
  {
   FUNC_2(VAR_4, (FUNC_3(VAR_3),
       FUNC_4("COPY data failed: %s", FUNC_7(VAR_5))));
   break;
  }

  case 'H':
  case 'S':
  {





   VAR_8 = 0;
   break;
  }

  default:
  {
   FUNC_2(VAR_4, (FUNC_3(VAR_2),
       FUNC_4("unexpected message type 0x%02X during COPY data",
           VAR_6)));
   break;
  }
 }

 return VAR_8;
}
