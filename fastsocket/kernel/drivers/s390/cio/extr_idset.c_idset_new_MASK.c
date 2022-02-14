
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idset {int num_ssid; int num_id; int bitmap; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 struct idset* FUNC_2 (scalar_t__) ;

__attribute__((used)) static struct idset *FUNC_3(int VAR_0, int VAR_1)
{
 struct idset *VAR_2;

 VAR_2 = FUNC_2(sizeof(struct idset) + FUNC_0(VAR_0, VAR_1));
 if (VAR_2) {
  VAR_2->num_ssid = VAR_0;
  VAR_2->num_id = VAR_1;
  FUNC_1(VAR_2->bitmap, 0, FUNC_0(VAR_0, VAR_1));
 }
 return VAR_2;
}
