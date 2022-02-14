
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char*,char*,unsigned int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char*) ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int VAR_8 ;

void FUNC_7(void)
{

  char VAR_9[VAR_0], VAR_10[VAR_0];


  FUNC_5 (VAR_7);
  int VAR_11, VAR_12, VAR_13;
  unsigned VAR_14;
  unsigned VAR_15;
  unsigned VAR_16, VAR_17, VAR_18;
  char *VAR_19;
  int VAR_20;



  for (VAR_14 = 0; VAR_14 <= VAR_4; VAR_14++)
    for (VAR_15 = 0; VAR_15 <= VAR_4; VAR_15++)
      for (VAR_16 = 1; VAR_16 <= VAR_1; VAR_16++)
 {
 for (VAR_17 = 1; VAR_17 < VAR_16 + VAR_2; VAR_17++)
   for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++)
     for (VAR_13 = 1; VAR_13 < VAR_5; VAR_13++)
     {
       if (VAR_16 - VAR_17 > VAR_2)
  continue;

       for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
  {
    VAR_9[VAR_11] = 'A' + (VAR_11 % 26);
    VAR_10[VAR_11] = VAR_9[VAR_11];
  }
   FUNC_1(0);
       FUNC_2 (VAR_10 + VAR_15, VAR_9 + VAR_14, VAR_16);


       VAR_19 = VAR_9 + VAR_14 + VAR_16 - 1;
       for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++)
  {
    *VAR_19++ = '\0';
  }


       VAR_19 = VAR_10 + VAR_15 + VAR_17 - 1;
       for (VAR_12 = 0; VAR_12 < (int)VAR_18; VAR_12++)
  *VAR_19++ = 'x';

       *VAR_19 = '\0';

       VAR_20 = FUNC_6 (VAR_9 + VAR_14, VAR_10 + VAR_15);


       if (VAR_16 == VAR_17)
  {
    if (VAR_18 == 0)
      {
        if (VAR_20 != 0)
   {
   FUNC_3 ("\nFailed: after %s of %u bytes "
         "with src_align %u and dst_align %u, "
         "dest after %d bytes is modified for %d bytes, "
         "return value is %d, expected 0.\n",
         VAR_8, VAR_16, VAR_14, VAR_15, VAR_17, VAR_18, VAR_20);
   }
      }
    else
      {
        if (VAR_20 >= 0)
   FUNC_3 ("\nFailed: after %s of %u bytes "
         "with src_align %u and dst_align %u, "
         "dest after %d bytes is modified for %d bytes, "
         "return value is %d, expected negative.\n",
         VAR_8, VAR_16, VAR_14, VAR_15, VAR_17, VAR_18, VAR_20);
      }
  }
       else if (VAR_17 > VAR_16)
  {
    if (VAR_20 >= 0)
      {
        FUNC_3 ("\nFailed: after %s of %u bytes "
       "with src_align %u and dst_align %u, "
       "dest after %d bytes is modified for %d bytes, "
       "return value is %d, expected negative.\n",
       VAR_8, VAR_16, VAR_14, VAR_15, VAR_17, VAR_18, VAR_20);
      }
  }
       else
  {
    if (VAR_18 == 0)
      {
        if (VAR_20 <= 0)
   FUNC_3 ("\nFailed: after %s of %u bytes "
         "with src_align %u and dst_align %u, "
         "dest after %d bytes is modified for %d bytes, "
         "return value is %d, expected positive.\n",
         VAR_8, VAR_16, VAR_14, VAR_15, VAR_17, VAR_18, VAR_20);
      }
    else
      {
        if (VAR_20 >= 0)
   FUNC_3 ("\nFailed: after %s of %u bytes "
         "with src_align %u and dst_align %u, "
         "dest after %d bytes is modified for %d bytes, "
         "return value is %d, expected negative.\n",
         VAR_8, VAR_16, VAR_14, VAR_15, VAR_17, VAR_18, VAR_20);
      }
  }
     }
 }


  VAR_9[1] = 'A';
  VAR_10[1] = 'A';
  VAR_9[2] = 'B';
  VAR_10[2] = 'B';
  VAR_9[3] = 'C';
  VAR_10[3] = 'C';
  VAR_9[4] = '\0';
  VAR_10[4] = '\0';

  VAR_9[0] = 0xc1;
  VAR_10[0] = 0x41;
  VAR_20 = FUNC_6 (VAR_9, VAR_10);
  if (VAR_20 <= 0)
    FUNC_3 ("\nFailed: expected positive, return %d\n", VAR_20);

  VAR_9[0] = 0x01;
  VAR_10[0] = 0x82;
  VAR_20 = FUNC_6 (VAR_9, VAR_10);
  if (VAR_20 >= 0)
    FUNC_3 ("\nFailed: expected negative, return %d\n", VAR_20);

  VAR_10[0] = VAR_9[0] = 'D';
  VAR_9[3] = 0xc1;
  VAR_10[3] = 0x41;
  VAR_20 = FUNC_6 (VAR_9, VAR_10);
  if (VAR_20 <= 0)
    FUNC_3 ("\nFailed: expected positive, return %d\n", VAR_20);

  VAR_9[3] = 0x01;
  VAR_10[3] = 0x82;
  VAR_20 = FUNC_6 (VAR_9, VAR_10);
  if (VAR_20 >= 0)
    FUNC_3 ("\nFailed: expected negative, return %d\n", VAR_20);


  if (VAR_6 != 0)
    {
      FUNC_4 ("ERROR. FAILED.\n");
      FUNC_0 ();
    }

  FUNC_4("ok\n");
}
