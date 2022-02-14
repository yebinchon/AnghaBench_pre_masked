
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_cmt_priv {unsigned long next_match_value; unsigned long max_match_value; unsigned long match_value; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (struct sh_cmt_priv*,int*) ;
 int FUNC_2 (struct sh_cmt_priv*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct sh_cmt_priv *VAR_3,
           int VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6 = VAR_3->next_match_value;
 unsigned long VAR_7 = 0;
 unsigned long VAR_8 = 0;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_3, &VAR_9);
 VAR_3->flags |= VAR_1;

 if (VAR_9) {




  VAR_3->flags |= VAR_2;
  return;
 }

 if (VAR_4)
  VAR_8 = 0;

 do {



  VAR_5 = VAR_8 + VAR_6 + VAR_7;
  if (VAR_5 > VAR_3->max_match_value)
   VAR_5 = VAR_3->max_match_value;

  FUNC_2(VAR_3, VAR_0, VAR_5);

  VAR_8 = FUNC_1(VAR_3, &VAR_9);
  if (VAR_9 && (VAR_5 > VAR_3->match_value)) {






   VAR_3->flags |= VAR_2;
   break;
  }

  if (VAR_9) {






   VAR_3->match_value = VAR_5;
   break;
  }


  if (VAR_8 < VAR_5) {





   VAR_3->match_value = VAR_5;
   break;
  }







  if (VAR_7)
   VAR_7 <<= 1;
  else
   VAR_7 = 1;

  if (!VAR_7)
   FUNC_0("sh_cmt: too long delay\n");

 } while (VAR_7);
}
