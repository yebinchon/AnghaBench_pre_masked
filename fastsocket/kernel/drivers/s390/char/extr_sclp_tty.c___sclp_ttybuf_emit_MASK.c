
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_buffer {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct sclp_buffer*,int (*) (struct sclp_buffer*,int)) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct sclp_buffer*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static inline void
FUNC_5(struct sclp_buffer *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_3(&VAR_1, VAR_4);
 FUNC_0(&VAR_3->list, &VAR_2);
 VAR_5 = VAR_0++;
 FUNC_4(&VAR_1, VAR_4);
 if (VAR_5)
  return;
 VAR_6 = FUNC_1(VAR_3, FUNC_2);
 if (VAR_6)
  FUNC_2(VAR_3, VAR_6);
}
