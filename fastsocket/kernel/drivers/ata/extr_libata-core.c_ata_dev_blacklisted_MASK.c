
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {int id; } ;
struct ata_blacklist_entry {unsigned long horkage; int * model_rev; int * model_num; } ;
typedef int model_rev ;
typedef int model_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ata_blacklist_entry* VAR_4 ;
 int FUNC_0 (int ,unsigned char*,int ,int) ;
 int FUNC_1 (int *,unsigned char*,char) ;

__attribute__((used)) static unsigned long FUNC_2(const struct ata_device *VAR_5)
{
 unsigned char VAR_6[VAR_3 + 1];
 unsigned char VAR_7[VAR_1 + 1];
 const struct ata_blacklist_entry *VAR_8 = VAR_4;

 FUNC_0(VAR_5->id, VAR_6, VAR_2, sizeof(VAR_6));
 FUNC_0(VAR_5->id, VAR_7, VAR_0, sizeof(VAR_7));

 while (VAR_8->model_num) {
  if (!FUNC_1(VAR_8->model_num, VAR_6, '*')) {
   if (VAR_8->model_rev == ((void*)0))
    return VAR_8->horkage;
   if (!FUNC_1(VAR_8->model_rev, VAR_7, '*'))
    return VAR_8->horkage;
  }
  VAR_8++;
 }
 return 0;
}
