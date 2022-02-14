
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Tracks {int nb_tracks; struct Track** tracks; } ;
struct Track {int name; int track_id; int bitrate; scalar_t__ is_video; } ;
typedef int filename ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_5(struct Tracks *VAR_0, const char *VAR_1,
                                   const char *VAR_2,
                                   const char *VAR_3,
                                   const char *VAR_4)
{
    char VAR_5[1000];
    FILE *VAR_6;
    int VAR_7;

    FUNC_4(VAR_5, sizeof(VAR_5), "%s%s.ism", VAR_2, VAR_1);
    VAR_6 = FUNC_1(VAR_5, "w");
    if (!VAR_6) {
        FUNC_3(VAR_5);
        return;
    }
    FUNC_2(VAR_6, "<?xml version=\"1.0\" encoding=\"utf-8\"?>\n");
    FUNC_2(VAR_6, "<smil xmlns=\"http://www.w3.org/2001/SMIL20/Language\">\n");
    FUNC_2(VAR_6, "\t<head>\n");
    FUNC_2(VAR_6, "\t\t<meta name=\"clientManifestRelativePath\" "
                 "content=\"%s%s.ismc\" />\n", VAR_4, VAR_1);
    FUNC_2(VAR_6, "\t</head>\n");
    FUNC_2(VAR_6, "\t<body>\n");
    FUNC_2(VAR_6, "\t\t<switch>\n");
    for (VAR_7 = 0; VAR_7 < VAR_0->nb_tracks; VAR_7++) {
        struct Track *VAR_8 = VAR_0->tracks[VAR_7];
        const char *VAR_9 = VAR_8->is_video ? "video" : "audio";
        FUNC_2(VAR_6, "\t\t\t<%s src=\"%s%s\" systemBitrate=\"%d\">\n",
                VAR_9, VAR_3, VAR_8->name, VAR_8->bitrate);
        FUNC_2(VAR_6, "\t\t\t\t<param name=\"trackID\" value=\"%d\" "
                     "valueType=\"data\" />\n", VAR_8->track_id);
        FUNC_2(VAR_6, "\t\t\t</%s>\n", VAR_9);
    }
    FUNC_2(VAR_6, "\t\t</switch>\n");
    FUNC_2(VAR_6, "\t</body>\n");
    FUNC_2(VAR_6, "</smil>\n");
    FUNC_0(VAR_6);
}
