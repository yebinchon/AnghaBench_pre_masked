
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct module {scalar_t__ sdt_nprobes; TYPE_2__* sdt_probes; } ;
struct modctl {char* mod_modname; int mod_loadcnt; scalar_t__ mod_address; } ;
struct TYPE_11__ {scalar_t__ sdtp_id; char* sdtp_prefix; int * sdtp_name; } ;
typedef TYPE_1__ sdt_provider_t ;
struct TYPE_12__ {char* sdpd_name; char* sdpd_func; scalar_t__ sdpd_offset; struct TYPE_12__* sdpd_next; } ;
typedef TYPE_2__ sdt_probedesc_t ;
struct TYPE_13__ {char* sdp_name; int sdp_namelen; int sdp_id; int * sdp_patchpoint; int sdp_savedval; int sdp_patchval; struct TYPE_13__* sdp_hashnext; struct TYPE_13__* sdp_next; TYPE_1__* sdp_provider; struct modctl* sdp_ctl; int sdp_loadcnt; } ;
typedef TYPE_3__ sdt_probe_t ;
typedef int sdt_instr_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__,char*,char const*,char*,int ,TYPE_3__*) ;
 int FUNC_4 (scalar_t__,char*,char const*,char*) ;
 char* FUNC_5 (int,int ) ;
 TYPE_3__* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,TYPE_2__*,TYPE_3__*,char*,int) ;
 TYPE_3__** VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_8 (char const*) ;
 char* FUNC_9 (char const*,char const*) ;

__attribute__((used)) static void
FUNC_10(void *VAR_7, struct modctl *VAR_8)
{
#pragma unused(arg)
 struct module *VAR_9 = (struct module *)VAR_8->mod_address;
 char *VAR_10 = VAR_8->mod_modname;
 sdt_probedesc_t *VAR_11;
 sdt_probe_t *VAR_12, *VAR_13;
 sdt_provider_t *VAR_14;
 int VAR_15;





 for (VAR_14 = VAR_6; VAR_14->sdtp_name != ((void*)0); VAR_14++) {
  if (VAR_14->sdtp_id == VAR_1)
   return;
 }

 if (!VAR_9 || VAR_9->sdt_nprobes != 0 || (VAR_11 = VAR_9->sdt_probes) == ((void*)0))
  return;

 for (VAR_11 = VAR_9->sdt_probes; VAR_11 != ((void*)0); VAR_11 = VAR_11->sdpd_next) {
     const char *VAR_16 = VAR_11->sdpd_name, *VAR_17;
     char *VAR_18;
  int VAR_19, VAR_20;
  dtrace_id_t VAR_21;

  for (VAR_14 = VAR_6; VAR_14->sdtp_prefix != ((void*)0); VAR_14++) {
   const char *VAR_22, *VAR_23 = VAR_14->sdtp_prefix;

   if ((VAR_22 = FUNC_9(VAR_16, VAR_23))) {
    VAR_16 = VAR_22 + FUNC_8(VAR_23);
    break;
   }
  }

  VAR_18 = FUNC_5(VAR_15 = FUNC_8(VAR_16) + 1, VAR_2);

  for (VAR_19 = 0, VAR_20 = 0; VAR_16[VAR_20] != '\0'; VAR_19++) {
   if (VAR_16[VAR_20] == '_' && VAR_16[VAR_20 + 1] == '_') {
    VAR_18[VAR_19] = '-';
    VAR_20 += 2;
   } else {
    VAR_18[VAR_19] = VAR_16[VAR_20++];
   }
  }

  VAR_18[VAR_19] = '\0';

  VAR_12 = FUNC_6(sizeof (sdt_probe_t), VAR_2);
  VAR_12->sdp_loadcnt = VAR_8->mod_loadcnt;
  VAR_12->sdp_ctl = VAR_8;
  VAR_12->sdp_name = VAR_18;
  VAR_12->sdp_namelen = VAR_15;
  VAR_12->sdp_provider = VAR_14;

  VAR_17 = VAR_11->sdpd_func;

  if (VAR_17 == ((void*)0))
   VAR_17 = "<unknown>";




  if ((VAR_21 = FUNC_4(VAR_14->sdtp_id, VAR_10,
      VAR_17, VAR_18)) != VAR_0) {
   VAR_13 = FUNC_2(VAR_14->sdtp_id, VAR_21);
   FUNC_0(VAR_13 != ((void*)0));

   VAR_12->sdp_next = VAR_13->sdp_next;
   VAR_12->sdp_id = VAR_21;
   VAR_13->sdp_next = VAR_12;
  } else {
   VAR_12->sdp_id = FUNC_3(VAR_14->sdtp_id,
       VAR_10, VAR_17, VAR_18, VAR_3, VAR_12);

   VAR_9->sdt_nprobes++;
  }





  VAR_12->sdp_hashnext =
      VAR_5[FUNC_1(VAR_11->sdpd_offset)];
  VAR_5[FUNC_1(VAR_11->sdpd_offset)] = VAR_12;

  VAR_12->sdp_patchval = VAR_4;
  VAR_12->sdp_patchpoint = (sdt_instr_t *)VAR_11->sdpd_offset;
  VAR_12->sdp_savedval = *VAR_12->sdp_patchpoint;
 }
}
