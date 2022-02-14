__attribute__((used)) static void *FUNC_0(int VAR_0, void *VAR_1) {
 char *VAR_2 = VAR_1;

 if (VAR_0 < 0 || VAR_0 > 255)
  FUNC_0("overflow in escape sequence with resulting value `%d'\n", VAR_0);
 *VAR_2++ = VAR_0;
 return VAR_2;
}
