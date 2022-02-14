
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp_file {scalar_t__ kind; scalar_t__ dead; int rq; int rwait; } ;
struct ppp {scalar_t__ n_channels; int flags; } ;
struct file {struct ppp_file* private_data; } ;
typedef int poll_table ;


 scalar_t__ VAR_0 ;
 struct ppp* FUNC_0 (struct ppp_file*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct file*,int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_7, poll_table *VAR_8)
{
 struct ppp_file *VAR_9 = VAR_7->private_data;
 unsigned int VAR_10;

 if (!VAR_9)
  return 0;
 FUNC_1(VAR_7, &VAR_9->rwait, VAR_8);
 VAR_10 = VAR_3 | VAR_5;
 if (FUNC_2(&VAR_9->rq))
  VAR_10 |= VAR_2 | VAR_4;
 if (VAR_9->dead)
  VAR_10 |= VAR_1;
 else if (VAR_9->kind == VAR_0) {

  struct ppp *VAR_11 = FUNC_0(VAR_9);
  if (VAR_11->n_channels == 0
      && (VAR_11->flags & VAR_6) == 0)
   VAR_10 |= VAR_2 | VAR_4;
 }

 return VAR_10;
}
