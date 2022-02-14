
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mddev {int external; int persistent; int major_version; int minor_version; char* metadata_type; int disks; } ;
typedef size_t ssize_t ;
struct TYPE_3__ {int * name; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char**,int) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char*,char const*,size_t) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static ssize_t
FUNC_6(struct mddev *VAR_4, const char *VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8;
 char *VAR_9;




 if (VAR_4->external && FUNC_4(VAR_5, "external:", 9) == 0)
  ;
 else if (!FUNC_2(&VAR_4->disks))
  return -VAR_0;

 if (FUNC_1(VAR_5, "none")) {
  VAR_4->persistent = 0;
  VAR_4->external = 0;
  VAR_4->major_version = 0;
  VAR_4->minor_version = 90;
  return VAR_6;
 }
 if (FUNC_4(VAR_5, "external:", 9) == 0) {
  size_t VAR_10 = VAR_6-9;
  if (VAR_10 >= sizeof(VAR_4->metadata_type))
   VAR_10 = sizeof(VAR_4->metadata_type)-1;
  FUNC_5(VAR_4->metadata_type, VAR_5+9, VAR_10);
  VAR_4->metadata_type[VAR_10] = 0;
  if (VAR_10 && VAR_4->metadata_type[VAR_10-1] == '\n')
   VAR_4->metadata_type[--VAR_10] = 0;
  VAR_4->persistent = 0;
  VAR_4->external = 1;
  VAR_4->major_version = 0;
  VAR_4->minor_version = 90;
  return VAR_6;
 }
 VAR_7 = FUNC_3(VAR_5, &VAR_9, 10);
 if (VAR_9==VAR_5 || *VAR_9 != '.')
  return -VAR_1;
 VAR_5 = VAR_9+1;
 VAR_8 = FUNC_3(VAR_5, &VAR_9, 10);
 if (VAR_9==VAR_5 || (*VAR_9 && *VAR_9 != '\n') )
  return -VAR_1;
 if (VAR_7 >= FUNC_0(VAR_3) || VAR_3[VAR_7].name == ((void*)0))
  return -VAR_2;
 VAR_4->major_version = VAR_7;
 VAR_4->minor_version = VAR_8;
 VAR_4->persistent = 1;
 VAR_4->external = 0;
 return VAR_6;
}
