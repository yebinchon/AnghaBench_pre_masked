
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef scalar_t__ pid_t ;
struct TYPE_10__ {int list; } ;
typedef TYPE_2__ memstat_bucket_t ;
struct TYPE_9__ {scalar_t__ p_pid; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (unsigned int*,int ) ;
 TYPE_1__* FUNC_3 (unsigned int*,TYPE_1__*,int ) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(unsigned int VAR_4, pid_t *VAR_5, int VAR_6)
{
 memstat_bucket_t *VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 if ((VAR_5 == ((void*)0)) || (VAR_6 <= 0)) {
  return(0);
 }

 if (VAR_4 >= VAR_1) {
                return(0);
        }

 VAR_7 = &VAR_2[VAR_4];
 for (VAR_8=0; VAR_8 < VAR_6; VAR_8++) {
  unsigned int VAR_10 = VAR_4;
  proc_t VAR_11 = ((void*)0);
  proc_t VAR_12 = ((void*)0);
  pid_t VAR_13;
  int VAR_14;

  VAR_14 = ((VAR_6 - 1) - VAR_8);
                VAR_13 = VAR_5[VAR_14];


                VAR_11 = FUNC_2(&VAR_10, VAR_0);
                while (VAR_11) {
                        if (VAR_11->p_pid == VAR_13) {
                                VAR_12 = VAR_11;
                                break;
                        }
                        VAR_11 = FUNC_3(&VAR_10, VAR_11, VAR_0);
                }

                if (VAR_12 == ((void*)0)) {

                        continue;
                } else {
                        FUNC_1(&VAR_7->list, VAR_12, VAR_3);
                        FUNC_0(&VAR_7->list, VAR_12, VAR_3);
   VAR_9++;
                }
        }
 return(VAR_9);
}
