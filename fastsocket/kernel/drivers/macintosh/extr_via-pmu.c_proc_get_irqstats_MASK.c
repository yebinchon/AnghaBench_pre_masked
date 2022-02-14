
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int* VAR_0 ;
 int FUNC_0 (char*,char*,int,int,char const*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_1, char **VAR_2, off_t VAR_3,
    int VAR_4, int *VAR_5, void *VAR_6)
{
 int VAR_7;
 char* VAR_8 = VAR_1;
 static const char *VAR_9[] = {
  "Total CB1 triggered events",
  "Total GPIO1 triggered events",
  "PC-Card eject button",
  "Sound/Brightness button",
  "ADB message",
  "Battery state change",
  "Environment interrupt",
  "Tick timer",
  "Ghost interrupt (zero len)",
  "Empty interrupt (empty mask)",
  "Max irqs in a row"
        };

 for (VAR_7=0; VAR_7<11; VAR_7++) {
  VAR_8 += FUNC_0(VAR_8, " %2u: %10u (%s)\n",
        VAR_7, VAR_0[VAR_7], VAR_9[VAR_7]);
 }
 return VAR_8 - VAR_1;
}
