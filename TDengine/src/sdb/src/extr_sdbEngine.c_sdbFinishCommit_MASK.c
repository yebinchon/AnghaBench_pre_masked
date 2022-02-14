
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sdbEcommit ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ size; int fd; } ;
typedef TYPE_1__ SSdbTable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *,int) ;

void FUNC_3(void *VAR_2) {
  SSdbTable *VAR_3 = (SSdbTable *)VAR_2;
  uint32_t VAR_4 = VAR_0;

  off_t VAR_5 = FUNC_1(VAR_3->fd, 0, VAR_1);
  FUNC_0(VAR_5 == VAR_3->size);
  FUNC_2(VAR_3->fd, &VAR_4, sizeof(VAR_4));
  VAR_3->size += sizeof(VAR_4);
}
