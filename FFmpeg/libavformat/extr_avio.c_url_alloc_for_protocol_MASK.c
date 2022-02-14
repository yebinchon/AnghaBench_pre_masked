
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int flags; char* name; int priv_data_size; int * priv_data_class; int url_write; int url_read; } ;
typedef TYPE_1__ URLProtocol ;
struct TYPE_10__ {char* filename; int flags; struct TYPE_10__* priv_data; int interrupt_callback; scalar_t__ max_packet_size; scalar_t__ is_streamed; TYPE_1__ const* prot; int * av_class; } ;
typedef TYPE_2__ URLContext ;
typedef int AVIOInterruptCB ;
typedef int AVClass ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*,int ,char*,char*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,char*,char*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_8 ;
 int FUNC_8 (char*,char*,int) ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char*,char*,int) ;

__attribute__((used)) static int FUNC_14(URLContext **VAR_9, const URLProtocol *VAR_10,
                                  const char *VAR_11, int VAR_12,
                                  const AVIOInterruptCB *VAR_13)
{
    URLContext *VAR_14;
    int VAR_15;





    if ((VAR_12 & VAR_1) && !VAR_10->url_read) {
        FUNC_2(((void*)0), VAR_3,
               "Impossible to open the '%s' protocol for reading\n", VAR_10->name);
        return FUNC_0(VAR_5);
    }
    if ((VAR_12 & VAR_2) && !VAR_10->url_write) {
        FUNC_2(((void*)0), VAR_3,
               "Impossible to open the '%s' protocol for writing\n", VAR_10->name);
        return FUNC_0(VAR_5);
    }
    VAR_14 = FUNC_3(sizeof(URLContext) + FUNC_12(VAR_11) + 1);
    if (!VAR_14) {
        VAR_15 = FUNC_0(VAR_6);
        goto fail;
    }
    VAR_14->av_class = &VAR_8;
    VAR_14->filename = (char *)&VAR_14[1];
    FUNC_11(VAR_14->filename, VAR_11);
    VAR_14->prot = VAR_10;
    VAR_14->flags = VAR_12;
    VAR_14->is_streamed = 0;
    VAR_14->max_packet_size = 0;
    if (VAR_10->priv_data_size) {
        VAR_14->priv_data = FUNC_3(VAR_10->priv_data_size);
        if (!VAR_14->priv_data) {
            VAR_15 = FUNC_0(VAR_6);
            goto fail;
        }
        if (VAR_10->priv_data_class) {
            int VAR_16= FUNC_12(VAR_10->name);
            char *VAR_17 = FUNC_9(VAR_14->filename, ',');
            *(const AVClass **)VAR_14->priv_data = VAR_10->priv_data_class;
            FUNC_5(VAR_14->priv_data);
            if(!FUNC_13(VAR_10->name, VAR_14->filename, VAR_16) && VAR_14->filename + VAR_16 == VAR_17){
                int VAR_18= 0;
                char *VAR_19= VAR_17;
                char VAR_20= *++VAR_19;
                char *VAR_21, *VAR_22;
                VAR_19++;

                if (FUNC_10(VAR_10->name, "subfile"))
                    VAR_18 = FUNC_0(VAR_4);

                while(VAR_18 >= 0 && (VAR_21= FUNC_9(VAR_19, VAR_20)) && VAR_19<VAR_21 && (VAR_22 = FUNC_9(VAR_21+1, VAR_20))){
                    *VAR_22= *VAR_21= 0;
                    if (FUNC_10(VAR_19, "start") && FUNC_10(VAR_19, "end")) {
                        VAR_18 = VAR_0;
                    } else
                        VAR_18= FUNC_4(VAR_14->priv_data, VAR_19, VAR_21+1, 0);
                    if (VAR_18 == VAR_0)
                        FUNC_2(VAR_14, VAR_3, "Key '%s' not found.\n", VAR_19);
                    *VAR_22= *VAR_21= VAR_20;
                    VAR_19= VAR_22+1;
                }
                if(VAR_18<0 || VAR_19!=VAR_21){
                    FUNC_2(VAR_14, VAR_3, "Error parsing options string %s\n", VAR_17);
                    FUNC_1(&VAR_14->priv_data);
                    FUNC_1(&VAR_14);
                    VAR_15 = FUNC_0(VAR_4);
                    goto fail;
                }
                FUNC_8(VAR_17, VAR_21+1, FUNC_12(VAR_21));
            }
        }
    }
    if (VAR_13)
        VAR_14->interrupt_callback = *VAR_13;

    *VAR_9 = VAR_14;
    return 0;
fail:
    *VAR_9 = ((void*)0);
    if (VAR_14)
        FUNC_1(&VAR_14->priv_data);
    FUNC_1(&VAR_14);




    return VAR_15;
}
