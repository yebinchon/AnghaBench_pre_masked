void *FUNC_0(void *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2, VAR_3;





 if (VAR_1 > sizeof(long))
  VAR_2 = sizeof(long long);
 else if (VAR_1 > sizeof(int))
  VAR_2 = sizeof(long);
 else if (VAR_1 > sizeof(short))
  VAR_2 = sizeof(int);
 else if (VAR_1 > sizeof(char))
  VAR_2 = sizeof(short);
 else
  return (char *)VAR_0;

 VAR_3 = VAR_1 % VAR_2;

 if (VAR_3 == 0)
  return (char *)VAR_0;

 return (void *)(((unsigned long)VAR_0) + VAR_2 - VAR_3);
}
