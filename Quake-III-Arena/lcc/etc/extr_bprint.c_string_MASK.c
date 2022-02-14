char *FUNC_0(char *VAR_0) {
 static struct string { struct string *link; char str[1]; } *VAR_1;
 struct string *VAR_2;

 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->link)
  if (strcmp(VAR_2->str, VAR_0) == 0)
   return VAR_2->str;
 VAR_2 = (struct string *)FUNC_0(strlen(VAR_0) + sizeof *VAR_2);
 strcpy(VAR_2->str, VAR_0);
 VAR_2->link = VAR_1;
 VAR_1 = VAR_2;
 return VAR_2->str;
}
