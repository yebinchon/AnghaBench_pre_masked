
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware_priv {int nr_pages; struct firmware_priv* fw_id; struct firmware_priv* pages; } ;
struct device {int nr_pages; struct device* fw_id; struct device* pages; } ;


 int VAR_0 ;
 int FUNC_0 (struct firmware_priv) ;
 struct firmware_priv* FUNC_1 (struct firmware_priv*) ;
 int FUNC_2 (struct firmware_priv*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1)
{
 struct firmware_priv *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_pages; VAR_3++)
  FUNC_0(VAR_2->pages[VAR_3]);
 FUNC_2(VAR_2->pages);
 FUNC_2(VAR_2->fw_id);
 FUNC_2(VAR_2);
 FUNC_2(VAR_1);

 FUNC_3(VAR_0);
}
