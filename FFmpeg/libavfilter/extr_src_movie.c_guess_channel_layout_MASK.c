
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int buf ;
struct TYPE_7__ {char* channels; scalar_t__ channel_layout; } ;
struct TYPE_6__ {TYPE_1__* st; } ;
struct TYPE_5__ {TYPE_3__* codecpar; } ;
typedef TYPE_2__ MovieStream ;
typedef TYPE_3__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,int,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (void*,int ,char*,int,char*) ;

__attribute__((used)) static int FUNC_4(MovieStream *VAR_3, int VAR_4, void *VAR_5)
{
    AVCodecParameters *VAR_6 = VAR_3->st->codecpar;
    char VAR_7[256];
    int64_t VAR_8 = FUNC_2(VAR_6->channels);

    if (!VAR_8) {
        FUNC_3(VAR_5, VAR_0,
               "Channel layout is not set in stream %d, and could not "
               "be guessed from the number of channels (%d)\n",
               VAR_4, VAR_6->channels);
        return FUNC_0(VAR_2);
    }

    FUNC_1(VAR_7, sizeof(VAR_7), VAR_6->channels, VAR_8);
    FUNC_3(VAR_5, VAR_1,
           "Channel layout is not set in output stream %d, "
           "guessed channel layout is '%s'\n",
           VAR_4, VAR_7);
    VAR_6->channel_layout = VAR_8;
    return 0;
}
