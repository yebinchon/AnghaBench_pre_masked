__attribute__((used)) static void FUNC_0(int VAR_0, int VAR_1, const char *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 char VAR_6[40];
 if ((int) strlen(VAR_2) > VAR_5) {
  int VAR_7 = (VAR_5 - 3) >> 1;
  int VAR_8 = FUNC_0(VAR_2) - (VAR_5 - 3 - VAR_7);
  snprintf(VAR_6, sizeof(VAR_6), "%.*s...%s", VAR_7, VAR_2, VAR_2 + VAR_8);
  VAR_2 = VAR_6;
 }
 while (*VAR_2 != '\0')
  FUNC_0(VAR_0, VAR_1, *VAR_2++, VAR_3++, VAR_4);
}
