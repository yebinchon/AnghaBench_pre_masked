
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_10__ {int type; int name; } ;
struct TYPE_9__ {int name; int id; } ;
typedef TYPE_1__ AVCodecDescriptor ;
typedef TYPE_2__ AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,char const*,char const*,...) ;
 TYPE_1__* FUNC_1 (char const*) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (char const*) ;
 TYPE_2__* FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (char const*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static AVCodec *FUNC_7(const char *VAR_2, enum AVMediaType VAR_3, int VAR_4)
{
    const AVCodecDescriptor *VAR_5;
    const char *VAR_6 = VAR_4 ? "encoder" : "decoder";
    AVCodec *VAR_7;

    VAR_7 = VAR_4 ?
        FUNC_5(VAR_2) :
        FUNC_3(VAR_2);

    if (!VAR_7 && (VAR_5 = FUNC_1(VAR_2))) {
        VAR_7 = VAR_4 ? FUNC_4(VAR_5->id) :
                          FUNC_2(VAR_5->id);
        if (VAR_7)
            FUNC_0(((void*)0), VAR_1, "Matched %s '%s' for codec '%s'.\n",
                   VAR_6, VAR_7->name, VAR_5->name);
    }

    if (!VAR_7) {
        FUNC_0(((void*)0), VAR_0, "Unknown %s '%s'\n", VAR_6, VAR_2);
        FUNC_6(1);
    }
    if (VAR_7->type != VAR_3) {
        FUNC_0(((void*)0), VAR_0, "Invalid %s type '%s'\n", VAR_6, VAR_2);
        FUNC_6(1);
    }
    return VAR_7;
}
