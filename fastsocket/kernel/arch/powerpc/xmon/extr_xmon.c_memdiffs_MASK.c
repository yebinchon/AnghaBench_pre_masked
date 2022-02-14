__attribute__((used)) static void
FUNC_0(unsigned char *VAR_0, unsigned char *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
 unsigned VAR_4, VAR_5;

 VAR_5 = 0;
 for( VAR_4 = VAR_2; VAR_4 > 0; --VAR_4 )
  if( *VAR_0++ != *VAR_1++ )
   if( ++VAR_5 <= VAR_3 )
    printf("%.16s %.2x # %.16s %.2x\n", VAR_0 - 1,
     VAR_0[-1], VAR_1 - 1, VAR_1[-1]);
 if( VAR_5 > VAR_3 )
  FUNC_0("Total of %d differences\n", VAR_5);
}
