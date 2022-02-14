
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct libipw_network {int* rates; int* rates_ex; int mode; int rates_ex_len; int rates_len; } ;
struct ipw_supported_rates {int* supported_rates; scalar_t__ num_rates; } ;
struct ipw_priv {int rates_mask; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ipw_priv*,int ,int) ;
 int FUNC_2 (struct ipw_supported_rates*,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ipw_priv *VAR_2,
    const struct libipw_network *VAR_3,
    struct ipw_supported_rates *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
 VAR_5 = FUNC_3(VAR_3->rates_len, (u8) VAR_0);
 VAR_4->num_rates = 0;
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (!FUNC_1(VAR_2, VAR_3->mode,
      VAR_3->rates[VAR_6])) {

   if (VAR_3->rates[VAR_6] & VAR_1) {
    FUNC_0("Adding masked mandatory "
            "rate %02X\n",
            VAR_3->rates[VAR_6]);
    VAR_4->supported_rates[VAR_4->num_rates++] =
        VAR_3->rates[VAR_6];
    continue;
   }

   FUNC_0("Rate %02X masked : 0x%08X\n",
           VAR_3->rates[VAR_6], VAR_2->rates_mask);
   continue;
  }

  VAR_4->supported_rates[VAR_4->num_rates++] = VAR_3->rates[VAR_6];
 }

 VAR_5 = FUNC_3(VAR_3->rates_ex_len,
   (u8) (VAR_0 - VAR_5));
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (!FUNC_1(VAR_2, VAR_3->mode,
      VAR_3->rates_ex[VAR_6])) {
   if (VAR_3->rates_ex[VAR_6] & VAR_1) {
    FUNC_0("Adding masked mandatory "
            "rate %02X\n",
            VAR_3->rates_ex[VAR_6]);
    VAR_4->supported_rates[VAR_4->num_rates++] =
        VAR_3->rates[VAR_6];
    continue;
   }

   FUNC_0("Rate %02X masked : 0x%08X\n",
           VAR_3->rates_ex[VAR_6], VAR_2->rates_mask);
   continue;
  }

  VAR_4->supported_rates[VAR_4->num_rates++] =
      VAR_3->rates_ex[VAR_6];
 }

 return 1;
}
