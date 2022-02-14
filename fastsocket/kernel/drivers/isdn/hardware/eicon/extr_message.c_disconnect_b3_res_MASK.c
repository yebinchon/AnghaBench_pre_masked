
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t word ;
typedef int dword ;
typedef scalar_t__ byte ;
struct TYPE_12__ {int manufacturer_features; scalar_t__* ncci_state; } ;
struct TYPE_11__ {int ncpi_state; int B3_prot; scalar_t__ B2_prot; scalar_t__* inc_dis_ncci_table; scalar_t__ State; TYPE_1__* adapter; int appl; scalar_t__ channels; int call_dir; scalar_t__ fax_connect_info_length; scalar_t__ requested_options_conn; } ;
struct TYPE_10__ {scalar_t__* ncci_state; } ;
typedef TYPE_2__ PLCI ;
typedef TYPE_3__ DIVA_CAPI_ADAPTER ;
typedef int APPL ;
typedef int API_PARSE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,size_t) ;
 int VAR_14 ;
 int FUNC_2 (TYPE_2__*,size_t) ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int,int ,char*,size_t,...) ;
 int FUNC_6 (int,TYPE_2__*,int ) ;

__attribute__((used)) static byte FUNC_7(dword VAR_15, word VAR_16, DIVA_CAPI_ADAPTER *VAR_17,
         PLCI *VAR_18, APPL *VAR_19, API_PARSE *VAR_20)
{
  word VAR_21;
  word VAR_22;

  VAR_21 = (word)(VAR_15>>16);
  FUNC_0(1,FUNC_1("disconnect_b3_res(ncci=0x%x",VAR_21));
  if(VAR_18 && VAR_21) {
    VAR_18->requested_options_conn = 0;
    VAR_18->fax_connect_info_length = 0;
    VAR_18->ncpi_state = 0x00;
    if (((VAR_18->B3_prot != VAR_3) && (VAR_18->B3_prot != VAR_2) && (VAR_18->B3_prot != VAR_4))
      && ((VAR_18->B2_prot != VAR_0) && (VAR_18->B2_prot != VAR_1)))
    {
      VAR_18->call_dir |= VAR_5;
    }
    for(VAR_22=0; VAR_22<VAR_9 && VAR_18->inc_dis_ncci_table[VAR_22]!=(byte)VAR_21; VAR_22++);
    if(VAR_22<VAR_9) {
      if(VAR_18->channels)VAR_18->channels--;
      for(; VAR_22<VAR_9-1; VAR_22++) VAR_18->inc_dis_ncci_table[VAR_22] = VAR_18->inc_dis_ncci_table[VAR_22+1];
      VAR_18->inc_dis_ncci_table[VAR_9-1] = 0;

      FUNC_2 (VAR_18, VAR_21);

      if((VAR_18->State==VAR_6 || VAR_18->State==VAR_11) && !VAR_18->channels){
        if(VAR_18->State == VAR_11){
          FUNC_5(VAR_18->appl,
                VAR_13,
                VAR_15 & 0xffffL,
                0,
                "ws", (word)3, "\x03\x04\x00\x00");
          FUNC_5(VAR_18->appl, VAR_12, VAR_15 & 0xffffL, 0, "w", 0);
        }
        FUNC_4(VAR_18);
        VAR_18->State=VAR_6;
      }
    }
    else
    {
      if ((VAR_17->manufacturer_features & VAR_8)
       && ((VAR_18->B3_prot == 4) || (VAR_18->B3_prot == 5))
       && (VAR_17->ncci_state[VAR_21] == VAR_7))
      {
        FUNC_2 (VAR_18, VAR_21);

        FUNC_3(VAR_18,VAR_10,(byte)VAR_21);

        VAR_18->adapter->ncci_state[VAR_21] = VAR_6;
        FUNC_6 (VAR_15, VAR_18, VAR_14);
        return 1;
      }
    }
  }
  return 0;
}
