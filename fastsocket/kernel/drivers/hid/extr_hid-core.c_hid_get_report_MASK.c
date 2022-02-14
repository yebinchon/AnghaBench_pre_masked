
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct hid_report_enum {struct hid_report** report_id_hash; scalar_t__ numbered; } ;
struct hid_report {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;

__attribute__((used)) static struct hid_report *FUNC_1(struct hid_report_enum *VAR_0,
  const u8 *VAR_1)
{
 struct hid_report *VAR_2;
 unsigned int VAR_3 = 0;


 if (VAR_0->numbered)
  VAR_3 = *VAR_1;

 VAR_2 = VAR_0->report_id_hash[VAR_3];
 if (VAR_2 == ((void*)0))
  FUNC_0("undefined report_id %u received\n", VAR_3);

 return VAR_2;
}
