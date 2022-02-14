
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int (* read_word ) (scalar_t__) ;scalar_t__ base; } ;


 int FUNC_0 (struct onenand_chip*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_4(struct onenand_chip *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;

 if (!FUNC_0(VAR_4))
  return VAR_4->read_word(VAR_4->base + VAR_3);

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  VAR_5 = VAR_4->read_word(VAR_4->base + VAR_3 + VAR_6);
  if (FUNC_1(!VAR_5))
   continue;
  if (VAR_5 & VAR_0)
   return VAR_2;
  else
   VAR_7 = VAR_1;
 }

 return VAR_7;
}
