
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_wss {int name; int virtual_addr; int tag; int master_key; int secure_status; int hash; int bcast; int wssid; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int,char*,...) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,size_t,int *) ;

__attribute__((used)) static
ssize_t FUNC_4(struct wlp_wss *VAR_0, char *VAR_1,
      size_t VAR_2)
{
 ssize_t VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2, &VAR_0->wssid);
 VAR_3 += FUNC_0(VAR_1 + VAR_3, VAR_2 - VAR_3, " ");
 VAR_3 += FUNC_1(VAR_1 + VAR_3, VAR_2 - VAR_3,
         &VAR_0->bcast);
 VAR_3 += FUNC_0(VAR_1 + VAR_3, VAR_2 - VAR_3,
       " 0x%02x %u ", VAR_0->hash, VAR_0->secure_status);
 VAR_3 += FUNC_2(VAR_1 + VAR_3, VAR_2 - VAR_3,
        VAR_0->master_key);
 VAR_3 += FUNC_0(VAR_1 + VAR_3, VAR_2 - VAR_3, " 0x%02x ",
       VAR_0->tag);
 VAR_3 += FUNC_1(VAR_1 + VAR_3, VAR_2 - VAR_3,
         &VAR_0->virtual_addr);
 VAR_3 += FUNC_0(VAR_1 + VAR_3, VAR_2 - VAR_3, " %s", VAR_0->name);
 VAR_3 += FUNC_0(VAR_1 + VAR_3, VAR_2 - VAR_3,
       "\n\n#WSSID\n#WSS broadcast address\n"
       "#WSS hash\n#WSS secure status\n"
       "#WSS master key\n#WSS local tag\n"
       "#WSS local virtual EUI-48\n#WSS name\n");
 return VAR_3;
}
