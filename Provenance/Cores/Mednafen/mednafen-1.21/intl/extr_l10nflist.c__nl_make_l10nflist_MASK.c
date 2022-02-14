
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loaded_l10nfile {char* filename; int decided; struct loaded_l10nfile** successor; struct loaded_l10nfile* next; int * data; } ;


 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,size_t) ;
 char* FUNC_2 (char*,size_t,char*) ;
 int FUNC_3 (char*,size_t,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,char const*,size_t) ;
 size_t FUNC_7 (int) ;
 char* FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char const*) ;

struct loaded_l10nfile *
FUNC_11 (struct loaded_l10nfile **VAR_5,
      const char *VAR_6, size_t VAR_7,
      int VAR_8, const char *VAR_9, const char *VAR_10,
      const char *VAR_11, const char *VAR_12,
      const char *VAR_13,
      const char *VAR_14, int VAR_15)
{
  char *VAR_16;
  struct loaded_l10nfile **VAR_17;
  struct loaded_l10nfile *VAR_18;
  char *VAR_19;
  size_t VAR_20;
  size_t VAR_21;
  int VAR_22;



  if (FUNC_0 (VAR_9))
    VAR_7 = 0;


  VAR_16 = (char *) FUNC_5 (VAR_7
      + FUNC_10 (VAR_9)
      + ((VAR_8 & VAR_4) != 0
         ? FUNC_10 (VAR_10) + 1 : 0)
      + ((VAR_8 & VAR_1) != 0
         ? FUNC_10 (VAR_11) + 1 : 0)
      + ((VAR_8 & VAR_3) != 0
         ? FUNC_10 (VAR_12) + 1 : 0)
      + ((VAR_8 & VAR_2) != 0
         ? FUNC_10 (VAR_13) + 1 : 0)
      + 1 + FUNC_10 (VAR_14) + 1);

  if (VAR_16 == ((void*)0))
    return ((void*)0);


  VAR_19 = VAR_16;
  if (VAR_7 > 0)
    {
      FUNC_6 (VAR_19, VAR_6, VAR_7);
      FUNC_3 (VAR_19, VAR_7, VAR_0);
      VAR_19 += VAR_7;
      VAR_19[-1] = '/';
    }

  VAR_19 = FUNC_8 (VAR_19, VAR_9);

  if ((VAR_8 & VAR_4) != 0)
    {
      *VAR_19++ = '_';
      VAR_19 = FUNC_8 (VAR_19, VAR_10);
    }
  if ((VAR_8 & VAR_1) != 0)
    {
      *VAR_19++ = '.';
      VAR_19 = FUNC_8 (VAR_19, VAR_11);
    }
  if ((VAR_8 & VAR_3) != 0)
    {
      *VAR_19++ = '.';
      VAR_19 = FUNC_8 (VAR_19, VAR_12);
    }
  if ((VAR_8 & VAR_2) != 0)
    {
      *VAR_19++ = '@';
      VAR_19 = FUNC_8 (VAR_19, VAR_13);
    }

  *VAR_19++ = '/';
  FUNC_8 (VAR_19, VAR_14);



  VAR_17 = VAR_5;
  for (VAR_18 = *VAR_5; VAR_18 != ((void*)0); VAR_18 = VAR_18->next)
    if (VAR_18->filename != ((void*)0))
      {
 int VAR_23 = FUNC_9 (VAR_18->filename, VAR_16);
 if (VAR_23 == 0)

   break;
 if (VAR_23 < 0)
   {

     VAR_18 = ((void*)0);
     break;
   }

 VAR_17 = &VAR_18->next;
      }

  if (VAR_18 != ((void*)0) || VAR_15 == 0)
    {
      FUNC_4 (VAR_16);
      return VAR_18;
    }

  VAR_20 = (VAR_7 > 0 ? FUNC_1 (VAR_6, VAR_7) : 1);


  VAR_18 =
    (struct loaded_l10nfile *)
    FUNC_5 (sizeof (*VAR_18)
     + (((VAR_20 << FUNC_7 (VAR_8)) + (VAR_20 > 1 ? 1 : 0))
        * sizeof (struct loaded_l10nfile *)));
  if (VAR_18 == ((void*)0))
    {
      FUNC_4 (VAR_16);
      return ((void*)0);
    }

  VAR_18->filename = VAR_16;





  VAR_18->decided = (VAR_20 > 1
       || ((VAR_8 & VAR_1) != 0
    && (VAR_8 & VAR_3) != 0));
  VAR_18->data = ((void*)0);

  VAR_18->next = *VAR_17;
  *VAR_17 = VAR_18;

  VAR_21 = 0;
  for (VAR_22 = VAR_20 > 1 ? VAR_8 : VAR_8 - 1; VAR_22 >= 0; --VAR_22)
    if ((VAR_22 & ~VAR_8) == 0
 && !((VAR_22 & VAR_1) != 0 && (VAR_22 & VAR_3) != 0))
      {
 if (VAR_20 > 1)
   {

     char *VAR_24 = ((void*)0);

     while ((VAR_24 = FUNC_2 ((char *) VAR_6, VAR_7, VAR_24))
     != ((void*)0))
       VAR_18->successor[VAR_21++]
  = FUNC_11 (VAR_5, VAR_24, FUNC_10 (VAR_24) + 1,
          VAR_22, VAR_9, VAR_10, VAR_11,
          VAR_12, VAR_13, VAR_14,
          1);
   }
 else
   VAR_18->successor[VAR_21++]
     = FUNC_11 (VAR_5, VAR_6, VAR_7,
      VAR_22, VAR_9, VAR_10, VAR_11,
      VAR_12, VAR_13, VAR_14, 1);
      }
  VAR_18->successor[VAR_21] = ((void*)0);

  return VAR_18;
}
