
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct enc_key {int len; int key; int type; } ;
struct TYPE_2__ {int wep_enabled; } ;
struct assoc_request {int wep_tx_keyidx; TYPE_1__ secinfo; struct enc_key* wep_keys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char const*,int) ;
 int FUNC_4 (struct enc_key*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct assoc_request *VAR_5,
       const char *VAR_6,
       u16 VAR_7,
       u16 VAR_8,
       int VAR_9)
{
 int VAR_10 = 0;
 struct enc_key *VAR_11;

 FUNC_0(VAR_4);


 if (VAR_8 > 3) {
  VAR_10 = -VAR_0;
  goto out;
 }


 if (VAR_7 > VAR_1) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_11 = &VAR_5->wep_keys[VAR_8];

 if (VAR_7 > 0) {
  FUNC_4(VAR_11, 0, sizeof(struct enc_key));
  VAR_11->type = VAR_3;


  VAR_11->len = (VAR_7 > VAR_2) ?
                  VAR_1 : VAR_2;
  FUNC_3(VAR_11->key, VAR_6, VAR_7);
 }

 if (VAR_9) {

  if (!VAR_11->len) {
   FUNC_2("key not set, so cannot enable it\n");
   VAR_10 = -VAR_0;
   goto out;
  }
  VAR_5->wep_tx_keyidx = VAR_8;
 }

 VAR_5->secinfo.wep_enabled = 1;

out:
 FUNC_1(VAR_4, "ret %d", VAR_10);
 return VAR_10;
}
