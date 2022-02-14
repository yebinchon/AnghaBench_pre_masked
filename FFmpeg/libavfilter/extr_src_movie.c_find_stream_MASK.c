
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_11__ {int nb_streams; TYPE_2__** streams; } ;
struct TYPE_10__ {scalar_t__ discard; TYPE_1__* codecpar; } ;
struct TYPE_9__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int,int,int,int *,int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (void*,int ,char*,char const*,...) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,char const*) ;
 int FUNC_4 (char const*,char*,char*,int*,char*) ;

__attribute__((used)) static AVStream *FUNC_5(void *VAR_5, AVFormatContext *VAR_6, const char *VAR_7)
{
    int VAR_8, VAR_9, VAR_10 = 0, VAR_11 = -1;
    char VAR_12[2], VAR_13;
    AVStream *VAR_14 = ((void*)0);
    enum AVMediaType VAR_15;

    VAR_9 = FUNC_4(VAR_7, "d%1[av]%d%c", VAR_12, &VAR_11, &VAR_13);
    if (VAR_9 >= 1 && VAR_9 <= 2) {
        VAR_15 = VAR_12[0] == 'v' ? VAR_2 : VAR_1;
        VAR_9 = FUNC_0(VAR_6, VAR_15, VAR_11, -1, ((void*)0), 0);
        if (VAR_9 < 0) {
            FUNC_2(VAR_5, VAR_3, "No %s stream with index '%d' found\n",
                   FUNC_1(VAR_15), VAR_11);
            return ((void*)0);
        }
        return VAR_6->streams[VAR_9];
    }
    for (VAR_8 = 0; VAR_8 < VAR_6->nb_streams; VAR_8++) {
        VAR_9 = FUNC_3(VAR_6, VAR_6->streams[VAR_8], VAR_7);
        if (VAR_9 < 0) {
            FUNC_2(VAR_5, VAR_3,
                   "Invalid stream specifier \"%s\"\n", VAR_7);
            return ((void*)0);
        }
        if (!VAR_9)
            continue;
        if (VAR_6->streams[VAR_8]->discard != VAR_0) {
            VAR_10++;
            continue;
        }
        if (VAR_14) {
            FUNC_2(VAR_5, VAR_4,
                   "Ambiguous stream specifier \"%s\", using #%d\n", VAR_7, VAR_8);
            break;
        }
        VAR_14 = VAR_6->streams[VAR_8];
    }
    if (!VAR_14) {
        FUNC_2(VAR_5, VAR_4, "Stream specifier \"%s\" %s\n", VAR_7,
               VAR_10 ? "matched only already used streams" :
                         "did not match any stream");
        return ((void*)0);
    }
    if (VAR_14->codecpar->codec_type != VAR_2 &&
        VAR_14->codecpar->codec_type != VAR_1) {
        FUNC_2(VAR_5, VAR_3, "Stream specifier \"%s\" matched a %s stream,"
               "currently unsupported by libavfilter\n", VAR_7,
               FUNC_1(VAR_14->codecpar->codec_type));
        return ((void*)0);
    }
    return VAR_14;
}
