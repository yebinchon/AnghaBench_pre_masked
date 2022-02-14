
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct TYPE_5__ {char* time_shift_buffer_depth; char* minimum_update_period; char* utc_timing_url; scalar_t__ debug_mode; scalar_t__ is_live; } ;
typedef TYPE_1__ WebMDashMuxContext ;
struct TYPE_6__ {int pb; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 (TYPE_2__*) ;
 struct tm* FUNC_3 (int *,struct tm*) ;
 int FUNC_4 (char*,int,char*,struct tm*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_1)
{
    WebMDashMuxContext *VAR_2 = VAR_1->priv_data;
    double VAR_3 = 1.0;
    FUNC_1(VAR_1->pb, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
    FUNC_1(VAR_1->pb, "<MPD\n");
    FUNC_1(VAR_1->pb, "  xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"\n");
    FUNC_1(VAR_1->pb, "  xmlns=\"urn:mpeg:DASH:schema:MPD:2011\"\n");
    FUNC_1(VAR_1->pb, "  xsi:schemaLocation=\"urn:mpeg:DASH:schema:MPD:2011\"\n");
    FUNC_1(VAR_1->pb, "  type=\"%s\"\n", VAR_2->is_live ? "dynamic" : "static");
    if (!VAR_2->is_live) {
        FUNC_1(VAR_1->pb, "  mediaPresentationDuration=\"PT%gS\"\n",
                    FUNC_2(VAR_1));
    }
    FUNC_1(VAR_1->pb, "  minBufferTime=\"PT%gS\"\n", VAR_3);
    FUNC_1(VAR_1->pb, "  profiles=\"%s\"%s",
                VAR_2->is_live ? "urn:mpeg:dash:profile:isoff-live:2011" : "urn:webm:dash:profile:webm-on-demand:2012",
                VAR_2->is_live ? "\n" : ">\n");
    if (VAR_2->is_live) {
        time_t VAR_4 = FUNC_5(((void*)0));
        struct tm VAR_5;
        struct tm *VAR_6 = FUNC_3(&VAR_4, &VAR_5);
        char VAR_7[21];
        if (!FUNC_4(VAR_7, 21, "%Y-%m-%dT%H:%M:%SZ", VAR_6)) {
            return VAR_0;
        }
        if (VAR_2->debug_mode) {
            FUNC_0(VAR_7, "", 1);
        }
        FUNC_1(VAR_1->pb, "  availabilityStartTime=\"%s\"\n", VAR_7);
        FUNC_1(VAR_1->pb, "  timeShiftBufferDepth=\"PT%gS\"\n", VAR_2->time_shift_buffer_depth);
        FUNC_1(VAR_1->pb, "  minimumUpdatePeriod=\"PT%dS\"", VAR_2->minimum_update_period);
        FUNC_1(VAR_1->pb, ">\n");
        if (VAR_2->utc_timing_url) {
            FUNC_1(VAR_1->pb, "<UTCTiming\n");
            FUNC_1(VAR_1->pb, "  schemeIdUri=\"urn:mpeg:dash:utc:http-iso:2014\"\n");
            FUNC_1(VAR_1->pb, "  value=\"%s\"/>\n", VAR_2->utc_timing_url);
        }
    }
    return 0;
}
