
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parsed_region_chan_11d {int dummy; } ;
struct lbs_private {int domainreg; int parsed_region_chan; scalar_t__ enable11d; } ;
struct lbs_802_11d_domain_reg {int dummy; } ;
struct bss_descriptor {int countryinfo; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (struct lbs_private*) ;

int FUNC_7(struct lbs_private *VAR_1,
                                        struct bss_descriptor * VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_0);
 if (VAR_1->enable11d) {
  FUNC_4(&VAR_1->parsed_region_chan, 0,
         sizeof(struct parsed_region_chan_11d));
  VAR_3 = FUNC_5(&VAR_2->countryinfo, 0,
            &VAR_1->parsed_region_chan);

  if (VAR_3 == -1) {
   FUNC_1("error parsing domain_info from AP\n");
   goto done;
  }

  FUNC_4(&VAR_1->domainreg, 0,
         sizeof(struct lbs_802_11d_domain_reg));
  FUNC_0(&VAR_1->parsed_region_chan,
          &VAR_1->domainreg);

  VAR_3 = FUNC_6(VAR_1);

  if (VAR_3) {
   FUNC_1("error setting domain info\n");
   goto done;
  }
 }
 VAR_3 = 0;

done:
 FUNC_3(VAR_0, "ret %d", VAR_3);
 return VAR_3;
}
