
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dohentry {size_t numaddr; struct dohaddr* addr; } ;
struct TYPE_2__ {int v4; } ;
struct dohaddr {TYPE_1__ ip; int type; } ;
typedef int DOHcode ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned char*,int) ;

__attribute__((used)) static DOHcode FUNC_1(unsigned char *VAR_3, int VAR_4, struct dohentry *VAR_5)
{

  if(VAR_5->numaddr < VAR_1) {
    struct dohaddr *VAR_6 = &VAR_5->addr[VAR_5->numaddr];
    VAR_6->type = VAR_0;
    FUNC_0(&VAR_6->ip.v4, &VAR_3[VAR_4], 4);
    VAR_5->numaddr++;
  }
  return VAR_2;
}
