
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expiry_time; int flags; } ;
struct ent {TYPE_1__ h; int id; int name; int type; int authname; } ;
struct cache_detail {int dummy; } ;
typedef int ent ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (char**) ;
 int FUNC_2 (char**,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct ent*,int ,int) ;
 int VAR_9 ;
 struct ent* FUNC_7 (struct ent*) ;
 struct ent* FUNC_8 (struct ent*,struct ent*) ;
 int FUNC_9 (char**,char*,int ) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (char*,char*) ;

__attribute__((used)) static int
FUNC_12(struct cache_detail *VAR_10, char *VAR_11, int VAR_12)
{
 struct ent VAR_13, *VAR_14;
 char *VAR_15;
 int VAR_16 = -VAR_1;

 if (VAR_11[VAR_12 - 1] != '\n')
  return (-VAR_1);
 VAR_11[VAR_12 - 1]= '\0';

 VAR_15 = FUNC_4(VAR_8, VAR_4);
 if (VAR_15 == ((void*)0))
  return (-VAR_3);

 FUNC_6(&VAR_13, 0, sizeof(VAR_13));


 if (FUNC_9(&VAR_11, VAR_15, VAR_8) <= 0)
  goto out;
 FUNC_5(VAR_13.authname, VAR_15, sizeof(VAR_13.authname));


 if (FUNC_9(&VAR_11, VAR_15, VAR_8) <= 0)
  goto out;
 VAR_13.type = FUNC_11(VAR_15, "user") == 0 ?
  VAR_7 : VAR_6;


 VAR_16 = FUNC_9(&VAR_11, VAR_15, VAR_8);
 if (VAR_16 <= 0 || VAR_16 >= VAR_5)
  goto out;
 FUNC_5(VAR_13.name, VAR_15, sizeof(VAR_13.name));


 VAR_13.h.expiry_time = FUNC_1(&VAR_11);
 if (VAR_13.h.expiry_time == 0)
  goto out;


 VAR_16 = FUNC_2(&VAR_11, &VAR_13.id);
 if (VAR_16 == -VAR_1)
  goto out;
 if (VAR_16 == -VAR_2)
  FUNC_10(VAR_0, &VAR_13.h.flags);

 VAR_16 = -VAR_3;
 VAR_14 = FUNC_7(&VAR_13);
 if (VAR_14 == ((void*)0))
  goto out;
 VAR_14 = FUNC_8(&VAR_13, VAR_14);
 if (VAR_14 == ((void*)0))
  goto out;

 FUNC_0(&VAR_14->h, &VAR_9);
 VAR_16 = 0;
out:
 FUNC_3(VAR_15);

 return (VAR_16);
}
