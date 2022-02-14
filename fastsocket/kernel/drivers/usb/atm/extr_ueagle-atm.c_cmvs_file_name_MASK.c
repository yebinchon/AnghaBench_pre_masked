
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uea_softc {size_t modem_index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct uea_softc*) ;
 scalar_t__ FUNC_1 (struct uea_softc*) ;
 int VAR_3 ;
 char** VAR_4 ;
 int FUNC_2 (char* const,int ) ;
 int FUNC_3 (char* const,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct uea_softc *VAR_5, char *const VAR_6, int VAR_7)
{
 char VAR_8[] = "CMVxy.bin";
 char *VAR_9;


 if (VAR_4[VAR_5->modem_index] == ((void*)0)) {
  if (FUNC_1(VAR_5) == VAR_0)
   VAR_8[3] = '9';
  else if (FUNC_1(VAR_5) == VAR_1)
   VAR_8[3] = '4';
  else
   VAR_8[3] = 'e';

  VAR_8[4] = FUNC_0(VAR_5) ? 'i' : 'p';
  VAR_9 = VAR_8;
 } else
  VAR_9 = VAR_4[VAR_5->modem_index];

 FUNC_2(VAR_6, VAR_2);
 FUNC_3(VAR_6, VAR_9, VAR_3);
 if (VAR_7 == 2)
  FUNC_3(VAR_6, ".v2", VAR_3);
}
