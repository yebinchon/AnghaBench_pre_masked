__attribute__((used)) static void *FUNC_0(int VAR_0) {
 static char *VAR_1, *VAR_2;

 VAR_0 = (VAR_0 + sizeof(char *) - 1)&~(sizeof(char *) - 1);
 if (VAR_0 >= VAR_2 - VAR_1) {
  VAR_1 = malloc(VAR_0 + 4*1024);
  FUNC_0(VAR_1);
  VAR_2 = VAR_1 + VAR_0 + 4*1024;
 }
 VAR_1 += VAR_0;
 return VAR_1 - VAR_0;
}
