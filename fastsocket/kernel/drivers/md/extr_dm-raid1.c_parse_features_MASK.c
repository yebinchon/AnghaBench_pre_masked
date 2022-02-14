
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror_set {int features; struct dm_target* ti; } ;
struct dm_target {char* error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,unsigned int*,char*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(struct mirror_set *VAR_2, unsigned VAR_3, char **VAR_4,
     unsigned *VAR_5)
{
 unsigned VAR_6;
 struct dm_target *VAR_7 = VAR_2->ti;
 char VAR_8;

 *VAR_5 = 0;

 if (!VAR_3)
  return 0;

 if (FUNC_0(VAR_4[0], "%u%c", &VAR_6, &VAR_8) != 1) {
  VAR_7->error = "Invalid number of features";
  return -VAR_1;
 }

 VAR_3--;
 VAR_4++;
 (*VAR_5)++;

 if (VAR_6 > VAR_3) {
  VAR_7->error = "Not enough arguments to support feature count";
  return -VAR_1;
 }

 if (!FUNC_1("handle_errors", VAR_4[0]))
  VAR_2->features |= VAR_0;
 else {
  VAR_7->error = "Unrecognised feature requested";
  return -VAR_1;
 }

 (*VAR_5)++;

 return 0;
}
