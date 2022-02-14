
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ disc_data; } ;
struct serport {int lock; int serio; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char const,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_1, const unsigned char *VAR_2, char *VAR_3, int VAR_4)
{
 struct serport *VAR_5 = (struct serport*) VAR_1->disc_data;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5->lock, VAR_6);

 if (!FUNC_3(VAR_0, &VAR_5->flags))
  goto out;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_0(VAR_5->serio, VAR_2[VAR_7], 0);

out:
 FUNC_2(&VAR_5->lock, VAR_6);
}
