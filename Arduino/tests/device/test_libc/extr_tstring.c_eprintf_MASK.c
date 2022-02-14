void FUNC_0 (int VAR_0, char *VAR_1, char *VAR_2, int VAR_3)
{
  if (VAR_3 != 0)
    printf ("Failure at line %d, result is <%.*s>, should be <%s> of size %d\n",
             VAR_0, VAR_3, VAR_1, VAR_2, VAR_3);
  else
    FUNC_0 ("Failure at line %d, result is <%s>, should be <%s>\n",
             VAR_0, VAR_1, VAR_2);
}
